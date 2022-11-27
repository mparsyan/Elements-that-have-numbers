#include <iostream>
#include <vector>

std::vector<std::string> elem_num(std::vector<std::string> v)
{
    bool flag = false;
    std::vector<std::string> v1;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (isdigit(v[i][j]) == true)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            v1.push_back(v[i]);
        }
        flag = false;
    }
    return v1;
}

int main()
{
    int size;
    std::string elem;
    std::vector<std::string> vec, vec1;
    std::cout << "Enter the size of vector: ";
    std::cin >> size;
    std::cout << "The elements of vector: ";
    for (int i = 0; i < size; i++)
    {
        std::cin >> elem;
        vec.push_back(elem);
    }
    vec1 = elem_num(vec);
    if (vec1.size() == 0)
    {
        std::cout << "Please enter the correct vectors!\n";
        return 0;
    }
    std::cout << "The result: ";
    for (int i = 0; i < vec1.size(); i++)
    {
        std::cout << vec1[i] << ' ';
    }
    std::cout << '\n';
    return 0;
}