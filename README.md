<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>

<header>
  <h1>Word Score Game 🏆</h1>
  <p>This C program compares two words entered via command-line arguments and calculates a score for each word. The program determines the winner based on the higher score or declares "Play again!" for a tie.</p>
</header>

<hr>

<details>
  <summary>Table of Contents 📖</summary>
  <ul>
    <li><a href="#task">Task</a></li>
    <li><a href="#input-and-output">Input and Output</a></li>
    <li><a href="#examples">Examples</a></li>
    <li><a href="#requirements">Requirements</a></li>
    <li><a href="#usage">Usage</a></li>
  </ul>
</details>

<hr>

<section id="task">
  <h2>Task 🛠️</h2>
  <p>Modify your program from project 2, task #2, to accept command-line arguments with single words instead of a sequence of words. The program should calculate the score for each word and compare them to determine the winner or prompt the user to "Play again!" in case of a tie.</p>
</section>

<hr>

<section id="input-and-output">
  <h2>Input and Output 🖥️</h2>
  <h3>Input</h3>
  <ul>
    <li>The program should accept exactly two words as command-line arguments, excluding the program name.</li>
    <li>If the number of arguments is not 3 (including the program name), print "invalid number of arguments".</li>
  </ul>

  <h3>Output</h3>
  <ul>
    <li>If the number of arguments is correct, the program will print either "John wins!" or "Play again!" depending on the score comparison of the two words.</li>
    <li>If the number of arguments is incorrect, the program will print "invalid number of arguments".</li>
  </ul>
</section>

<hr>

<section id="examples">
  <h2>Examples 📋</h2>
  <h3>Example #1</h3>
  <div class="code-block">
    Input:<br>
    ./a.out<br><br>
    Output:<br>
    invalid number of arguments
  </div>

  <h3>Example #2</h3>
  <div class="code-block">
    Input:<br>
    ./a.out be bee<br><br>
    Output:<br>
    John wins!
  </div>

  <h3>Example #3</h3>
  <div class="code-block">
    Input:<br>
    ./a.out peach cheap<br><br>
    Output:<br>
    Play again!
  </div>

  <h3>Example #4</h3>
  <div class="code-block">
    Input:<br>
    ./a.out no hi<br><br>
    Output:<br>
    Play again!
  </div>

  <p><strong>Explanation:</strong></p>
  <ul>
    <li>In Example #1, the program was called without arguments, so it prints "invalid number of arguments".</li>
    <li>In Example #2, the words "be" and "bee" result in "John wins!" based on their calculated scores.</li>
    <li>In Example #3, the words "peach" and "cheap" have the same score, so the program outputs "Play again!".</li>
    <li>In Example #4, the words "no" and "hi" have the same score, resulting in "Play again!".</li>
  </ul>
</section>

<hr>

<section id="requirements">
  <h2>Requirements ✔️</h2>
  <ol>
    <li>The program must include the function:
      <ul>
        <li><code>int calculate_score(char *word);</code></li>
        <li>This function calculates the score of a word, which could be based on letter positions, ASCII values, or any other scoring logic.</li>
        <li>The function must use pointer arithmetic (not array subscripting) to visit array elements.</li>
        <li>The program must check if the number of arguments is 3 (including the program name). If not, it should print "invalid number of arguments".</li>
      </ul>
    </li>
  </ol>
</section>

<hr>

<section id="usage">
  <h2>Usage 🚀</h2>
  <p><strong>1. Compile the Program:</strong></p>
  <div class="code-block">gcc -o word_score_game word_score_game.c</div>
  <p><strong>2. Run the Program:</strong></p>
  <div class="code-block">./word_score_game word1 word2</div>
  <p><strong>3. Input Required:</strong></p>
  <ul>
    <li>Two words entered as command-line arguments.</li>
  </ul>
</section>

</body>
</html>
