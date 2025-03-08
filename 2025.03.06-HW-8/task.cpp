#include<iostream>

class ArrayList
{
private:
	int len;
	int* data;
	void init(int len = 10)
	{
		//(*this).len = len;
		this->len = len;
		this->data = (int*)malloc(sizeof(int) * len);
	}
	bool indexValid(int index)
	{
		return (0 <= index && index < this->len);
	}
	void expand(int n)
    {
        int newLen = len + n;
        int* newData = (int*)malloc(sizeof(int) * newLen);
        for (int i = 0; i < len; ++i)
        {
            newData[i] = data[i];
        }
        free(data);
        data = newData;
        len = newLen;
    }
    void reduce(int n)
    {
        if (n >= len)
        {
            free(data);
            data = nullptr;
            len = 0;
        }
        else
        {
        int newLen = len - n;
        int* newData = (int*)malloc(sizeof(int) * newLen);
        for (int i = 0; i < newLen; ++i)
        {
            newData[i] = data[i];
        }
        free(data);
        data = newData;
        len = newLen;
        }
    }

public:
	ArrayList(int len = 10) 
	{
		this->init(len);
		for (int i = 0; i < this->len; ++i)
		{
			this->data[i] = 0;
		}
	}
	ArrayList(ArrayList& list)
	{
		//this->len = list.len;
		//this->data = list.data;
		this->init(list.len);
		for (int i = 0; i < list.len; ++i)
		{
			this->set(i, list.get(i));
		}
	}
	~ArrayList()
	{
		//for (int i = 0; i < this->len; ++i)
		//{
		//	this->data[i] = 0;
		//}
		free(this->data);
		//this->data = nullptr;
		//this->len = 0;
	}
	void randomize(int min = 10, int max = 99)
	{
		for (int i = 0; i < len; ++i)
		{
			this->data[i] = rand() % (max - min + 1) + min;
		}
	}
	void print()
	{
		for (int i = 0; i < this->len; ++i)
		{
			printf("%d ", this->data[i]);
		}
		printf("\n");
	}
	int get(int index)
	{
		if (indexValid(index))
		{
			return this->data[index];
		}
		return -1;
	}
	void set(int index, int value)
	{
		if (indexValid(index))
		{
			this->data[index] = value;
        }
	}
	int count()
	{
		return len;
	}
	void pushBack(int element)
    {
        expand(1);
        set(len - 1, element);
    }
	void pushFront(int element)
    {
        expand(1);
        for (int i = len - 1; i > 0; --i)
        {
            set(i, get(i - 1));
        }
        set(0, element);
    }
	void insert(int index, int element)
    {
        expand(1);
        for (int i = len - 1; i > index; --i)
        {
            set(i, get(i-1));
        }
        set(index, element);
    }
	int popBack()
    {
        int lastElement = get(len - 1);
        reduce(1);
        return lastElement;
    }
	int popFront()
    {
        int firstElement = get(0);
        reduce(1);
        for (int i = 0; i < len; ++i)
        {
            set(i, get(i + 1));
        }
        return firstElement;
    }

	int extract(int index)
    {
        int extracted = get(index);
        for (int i = index; i < len - 1; ++i)
        {
            set(i, get(i+1));
        }
        reduce (1);
        return extracted;
    }

	void reverse(int start, int end)
    {
        for (int i = 0; i <= (end - start) / 2; ++i)
        {
            int a = get(start + i);
            set(start + i, get(end - i));
            set(end - i, a);
        }
    }

	int sum()
    {
        int sum = 0;
        for(int i = 0; i < len; ++i)
        {
            sum += get(i);
        }
        return sum;
    }

	int secondMax()
    {
        int max = 0;
        int secondMax;
        for (int i = 0; i < len; ++i)
        {
            if (get(i) > max)
            {
                secondMax = max;
                max = get(i);
            }
            else if(get(i) < max && get(i) > secondMax)
            {
                secondMax = get(i);
            }
        }
        return secondMax;
    }

	int lastMinIndex()
    {
        int min = get(0);
        int minIndex = 0;
        for(int i = 0; i < len; ++i)
        {
            if (get(i) < min)
            {
                min = get(i);
                minIndex = i;
            }
            else if (get(i) == min)
            {
                minIndex = i;
            }
        }
        return minIndex;
    }

	void shift(int k)
    {
        reverse(0, len - 1);
        reverse(0, k - 1);
        reverse(k, len - 1);
    }

    bool isEven(int value)
    {
        return (value % 2 == 0);
    }

	int countOdd()
    {
        int count = 0;
        for(int i = 0; i < len; ++i)
        {
            if(!isEven(get(i)))
            {
                ++count;
            }
        }
        return count;
    }

	int sumEven()
    {
        int sum = 0;
        for(int i = 0; i < len; ++i)
        {
            if(isEven(get(i)))
            {
                sum += get(i);
            }
        }
        return sum;
    }
};

int max(ArrayList& list)
{
    if(list.count() == 0)
    {
        std::cout << "Empty array" << std::endl;
        return -1;
    }

	int mx = list.get(0);
	for (int i = 0; i < list.count(); ++i)
	{
		mx = (mx > list.get(i) ? mx : list.get(i));
	}
	return mx;
}

int main(int argc, char* argv[])
{
	ArrayList list(10);
	list.randomize();
	list.print();
	printf("%d\n", max(list));
	return 0;
}