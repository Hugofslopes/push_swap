<html>
<p align="center">
    <img src="https://www.42porto.com/wp-content/uploads/2024/08/42-Porto-Horizontal.png" alt="Pipex Image" />
</p>
<h1 align="center">Push_swap</h1>
</html>

## Summary
<html>
    <p>
        <b>Push_swap</b>is a project from 42 School that aims to teach how to sort a stack of numbers using only another stack and a limited set of allowed movements. The sorting should be done with as few movements as possible. The permitted movements are:<br>
        <b>Push</b> - This operation transfers the top number from one stack to the other.<br>
        <b>Swap</b> - This operation swaps the top two elements of the stack.<br>
        <b>Rotate</b> - This operation moves the top element to the end of the stack, causing all other elements to shift up by one position.<br>
        <b>Reverse rotate</b> - This operation moves the last element to the top of the stack, causing all other elements to shift down by one position.<br>
        These operations can be performed on either stack A or stack B, or on both at the same time. The operations are as follows:
        <b>ra</b>: Rotate stack A, <b>rb</b>: Rotate stack B, <b>rr</b>: Rotate stack A and B <b>rra</b>: Reverse rotate stack A, <b>rrb</b>: Reverse rotate stack B, <b>rrr</b>: Reverse rotate stack A and B, <b>pa</b>: Push to A, <b>pb</b>: Push to B, <b>sa</b>: Swap on A, <b>sb</b>: Swap on B, <b>ss</b>: Swap A and B at the same time.<br>
        I have different sorting methods depending on the number of elements. I have one function for sorting 2 numbers, another for 3 numbers, another for 4 numbers, and another for 5 numbers. After that, I use radix sort for larger sets of numbers.<br>
        The output of the program will be the movements performed to sort the stack.
    </p>
</html>

## Code Phases
### Parsing
<html>
    <ol>
        <li>Check if the number of arguments (if there are fewer than two, it means that no numbers were provided).</li>
        <li>Check if there is only one argument or multiple arguments.</li>
        <li>If there are multiple arguments, check for any errors (such as characters that are not numbers) and convert the characters to integers. Call <b>char_int_array( )</b></li>
        <li>If there is only one argument containing multiple numbers, divide it into separate arguments and then convert each character to an integer.Call <b>new_split( )</b></li>
        <li>Create a linked list and add each number in the order that it was inserted into the list. Call <b>add_to_lists( )</b></li>
        <li>Create an index starting at 0 and going up to the number of elements to facilitate the sort.</li>
    </ol>
</html>

### Sorting
<html>
    <ol>
        <li>Check if the argumetns are already in order</li>
        <li>Check the number of arguments to select the proper sorting algorithm:<br>
        <b>swap( )</b> for two elements<br>
        <b>order_3( )</b> for 3 elements<br>
        <b>order_4( )</b> for 4 elements<br>
        <b>order_5( )</b> for 5 elements<br>
        <b>radix_sort( )</b> for more than 5 elements<br></li>
        <li>Call ft_lstclear( ) for stack A and B to free all the elements</li>
    </ol>
</html>

### Radix sort
<html>
    <p>

    </p>
</html>

## Code Setup
<html>
    <p>    
    <b>Step 1:</b> Clone the repository
    </p>
</html>
 
    git clone https://github.com/Hugofslopes/push_swap  

<html>
    <p>
    <b>Step 2:</b> Open the terminal on the repo folder and write
    </p>
</html>

    make

<html>
    <p>
    <b>Step 3:</b> Execute
    </p>
</html>

    ./push_swap <numbers>

<html>
    <p>
    <b>Step 4:</b> Run tests<br>
    To check if the outputs are correct and if the stack is sorted properly, use the script below. This tool is applicable for Linux and was built by 42 itself.
    </p>
</html>

    ARG="<numbers>"; ./push_swap $ARG | ./checker_linux $ARG

## Improvements
<html>
    <p>
    To improve this program, we could try to calculate the "cost" of each movement to determine its effectiveness. The only issue with this approach is that while it may result in fewer movements, the execution time of the program could be significantly longer. Therefore, it really depends on the application of the sort. If you are looking for something effective and fast, you might consider using the radix sort as I did. However, if your goal is to minimize the number of moves, it would be better to calculate which move is the most advantageous.
    </p>
</html>
