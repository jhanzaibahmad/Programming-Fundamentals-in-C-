//#include<iostream>
//using namespace std;
//
//template <typename T,size_t Size>
//class GenericContainer
//{
//private:
//	T elements[Size];
//	size_t count;
//public:
//	GenericContainer():count(0){}
//
//	void addElement(const T& element)
//	{
//		if (count == Size)
//		{
//			cout << "Not possible";
//			return;
//		}
//		elements[count] = element;
//		count++;
//	}
//
//	void removeElement(const T& element)
//	{
//		elements[count] = NULL;;
//		count--;
//		if (count <0 )
//		{
//			cout << "Not possible";
//			return;
//		}
//		
//	}
//
//	void displayElements() const
//	{
//		for (int i = 0; i < count; i++)
//			cout << elements[i] << " ";
//	}
//};
//
//int main()
//{
//	// Example usage
//	GenericContainer<int, 5> intContainer;
//	intContainer.addElement(1);
//	intContainer.addElement(2);
//	intContainer.addElement(3);
//	intContainer.displayElements();
//
//	intContainer.removeElement(2);
//	intContainer.displayElements();
//
//	return 0;
//}