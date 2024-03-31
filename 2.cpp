// 2.     Ներածել սիմվոլային տող (առավելագույնը՝ 80 սիմվոլ)։ Ձևափոխել տողը փոք՚՚րատառ լատիներեն տառերը դարձնելով մեծատառ։ Ձևափոխությունը իրականացնել ֆունկցիայի միջոցով։

int main()
{
   int n;
   cout << "Enter the size of the array: ";
   cin >> n;

   char* dynamicArray = new char[n];

   std::cout << "Enter " << n << " characters: ";
   for (int i = 0; i < n; ++i) {
       cin >> dynamicArray[i];

       if (dynamicArray[i] == 'x') {
           dynamicArray[i] = 'k';
           dynamicArray[i + 1] = 's';
           i++;
       }
   }
   cout << "Modified Dynamic Array: ";
   for (int i = 0; i < n; ++i) {
       cout << dynamicArray[i] << " ";
   }
   cout << std::endl;

   delete[] dynamicArray;

   return 0;
}

