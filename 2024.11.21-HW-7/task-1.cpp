#include <iostream>
#include <cstdlib>

int* createArray(int size)
{
    int* array = nullptr;
    array = (int*)malloc(size * sizeof(int));

    for (int i = 0; i < size; ++i)
    {
        array[i] = 0;
    }
    return array;
}

void fillArray(int* array, int size)
{
    std::cout << "Enter " << size << " integers: " << std::endl;
    for(int i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
}

int* addToEnd(int* array, int& size, int element)
{
    int* newArray = (int*)malloc((size + 1) * sizeof(int));

    for(int i = 0; i < size; ++i)
    {
        newArray[i] = array[i];
    }

    newArray[size] = element;

    ++size;

    free (array);

    return newArray;
}

int* addToBegin(int* array, int& size, int element)
{
    int* newArray = (int*)malloc((size + 1) * sizeof(int));

    newArray[0] = element;

    for(int i = 0; i < size; ++i)
    {
        newArray[i + 1] = array[i];
    }
    ++size;

    free(array);

    return newArray;
}

int* removeFromEnd(int* array, int& size)
{
    int* newArray = (int*)malloc((size - 1) * sizeof(int));

    for(int i = 0; i < size - 1; ++i)
    {
        newArray[i] = array[i];
    }

    --size;
    
    free (array);

    return newArray;
}

int* removeFromBegin(int* array, int& size)
{
    int* newArray = (int*)malloc((size - 1) * sizeof(int));
    for(int i = 1; i < size; ++ i)
    {
        newArray[i - 1] = array[i];
    }

    --size;

    free (array);

    return newArray;
}

void printArray(int size, int* array)
{
    std::cout << "Array: " << std::endl;

    for(int i = 0; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }
     std::cout << std::endl;
}

void printMenu()
{
    std::cout << "0 - Exit" << std::endl;
    std::cout << "1 - Print array" << std::endl;
    std::cout << "2 - Add to end" << std::endl;
    std::cout << "3 - Add to beginning" << std::endl;
    std::cout << "4 - Remove from end" << std::endl;
    std::cout << "5 - Remove from beginning" << std::endl;
}

int main(int argc, char* argv[])
{
    int size = 0;
    std::cout << "Enter a size of the array: "<< std::endl;
    std::cin >> size;

    int* array = createArray(size);
    fillArray(array, size);

    bool flag = true;
    while(flag)
    {
        printMenu();
        int choice = 0;
        std::cin >> choice;

        switch(choice)
        {
        case 0:
            {
                flag = false;
                break;
            }
        case 1:
        {
            printArray(size, array);
            break;
        }
        case 2:
        {
            int element = 0;
            std::cout << "Enter an element: ";
            std::cin >> element;
            array = addToEnd(array, size, element);
            break;
        }
        case 3:
        {
            int element = 0;
            std::cout << "Enter an element: ";
            std::cin >> element;
            array = addToBegin(array, size, element);
            break;
        }
        case 4:
        {
            array = removeFromEnd(array, size);
            break;
        }
        case 5:
        {
            array = removeFromBegin(array, size);
            break;
        }
        }
    }
    
    free(array);
    return 0;
}
