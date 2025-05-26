# 26. Remove Duplicates from Sorted Array CPP

Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.
Custom Judge:

The judge will test your solution with the following code:

int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
If all assertions pass, then your solution will be accepted.
 

Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
Example 2:

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
 

Constraints:

1 <= nums.length <= 3 * 104
-100 <= nums[i] <= 100
nums is sorted in non-decreasing order.

# 26. Удаление дубликатов из отсортированного массива

Дан целочисленный массив nums, отсортированный в неубывающем порядке. Удалите дубликаты на месте так, чтобы каждый уникальный элемент встречался только один раз.Относительный порядок элементов должен остаться прежним. Затем верните количество уникальных элементов в массивеnums.

Предположим, что количество уникальных элементов в nums равно k, чтобы получить одобрение, вам нужно сделать следующее:

Измените массив nums таким образом, чтобы первые k элементов nums содержали уникальные элементы в том порядке, в котором они изначально присутствовали в nums. Остальные элементы nums не важны, как и размер nums.
Возвратk.
Судья по Обычаю:

Судья проверит ваше решение с помощью следующего кода:

int[] nums = [...]; // Входной массив 
int[] expectedNums = [...]; // Ожидаемый ответ правильной длины

int k = удаленные дубликаты (числа); // Вызывает вашу реализацию

assert k == Ожидаемые числа.длина; 
for (int i = 0; i < k; i++) {
 утвердить числа [i] == Ожидаемые числа [i]; 
}
Если все утверждения верны, то ваше решение будет принято.

 

Пример 1:

Входные данные: nums = [1,1,2]
Выходные данные: 2, nums = [1,2,_]
Объяснение: Ваша функция должна возвращать k = 2, при этом первые два элемента массива nums должны быть равны 1 и 2 соответственно.
 Неважно, что вы оставляете после возвращаемого k (поэтому это подчёркивания).
Пример 2:

Входные данные: nums = [0,0,1,1,1,2,2,3,3,4]
Выходные данные: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Пояснение: Ваша функция должна возвращать k = 5, при этом первые пять элементов массива nums должны быть равны 0, 1, 2, 3 и 4 соответственно.
 Неважно, что вы оставляете после возвращаемого k (поэтому это подчёркивания).
 

Ограничения:

1 <= nums.length <= 3 * 104
-100 <= nums[i] <= 100
nums отсортировано в неубывающем порядке.
