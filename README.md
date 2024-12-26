<h1>Stone Paper Scissors</h1>

<p>A simple console-based game where the player competes against the computer in a game of "Stone, Paper, Scissors."</p>

<h2>Features</h2>
<ul>
  <li>Choose the number of rounds to play (1-10).</li>
  <li>Interactive player input to select Stone, Paper, or Scissors.</li>
  <li>Randomized computer choice.</li>
  <li>Real-time evaluation and display of the round winner.</li>
  <li>Summary of overall results after all rounds.</li>
  <li>Visual and sound effects to highlight round winners.</li>
  <li>Option to replay the game.</li>
</ul>

<h2>Structure</h2>
<h3>Code Overview</h3>
<ul>
  <li><strong>Main Functions:</strong>
    <ul>
      <li><code>getNumberOfRounds()</code>: Prompts the player to input the number of rounds.</li>
      <li><code>getPlayerChoice()</code>: Allows the player to select Stone, Paper, or Scissors.</li>
      <li><code>computerChoice()</code>: Generates a random choice for the computer.</li>
      <li><code>roundWinner()</code>: Determines the winner of each round.</li>
      <li><code>winnerCounter()</code>: Keeps track of the results.</li>
      <li><code>printRoundResult()</code>: Displays the results of the current round.</li>
      <li><code>printFinalResult()</code>: Shows the final results after all rounds.</li>
      <li><code>startGame()</code>: Orchestrates the entire game flow.</li>
    </ul>
  </li>
  <li><strong>Other Functions:</strong>
    <ul>
      <li><code>ChangeBackgroundColor()</code>: Changes console color based on the round winner.</li>
      <li><code>resetScreen()</code>: Resets the console screen.</li>
      <li><code>tabs()</code>: Adds spacing for better visual alignment.</li>
    </ul>
  </li>
</ul>

<h2>Installation</h2>
<ol>
  <li>Clone this repository:
    <pre><code>git clone https://github.com/Mohammad-Amin-Shikhani97/stone-paper-scissors.git</code></pre>
  </li>
  <li>Compile the program:
    <pre><code>g++ -o stone-paper-scissors Stone\ Paper\ Scissor.cpp</code></pre>
  </li>
  <li>Run the game:
    <pre><code>./stone-paper-scissors</code></pre>
  </li>
</ol>

<h2>Requirements</h2>
<ul>
  <li>C++ compiler (e.g., g++ or clang++)</li>
  <li>A console-supported operating system (Windows, macOS, Linux)</li>
</ul>

<h2>How to Play</h2>
<ol>
  <li>Select the number of rounds (1 to 10).</li>
  <li>Make your choice: Stone, Paper, or Scissors.</li>
  <li>The computer will randomly select its choice.</li>
  <li>View the results of each round and the final outcome after all rounds.</li>
</ol>

<h2>Example</h2>
<pre>
<code>
How many rounds do you want to play?(1 to 10)
3
Your Choice: [1]:Stone, [2]:Paper, [3]:Scissor ?
1
--------------Round [1]--------------
Player1 Choice	: Stone
Computer Choice	: Paper
Round Winner	: [Computer]
-------------------------------------------------

Do you want to play again? Y/N?
</code>
</pre>

<h2>Future Enhancements</h2>
<ul>
  <li>Add multiplayer mode for competing against another player.</li>
  <li>Create a more user-friendly interface.</li>
  <li>Introduce scoring systems or difficulty levels.</li>
</ul>

<h2>License</h2>
<p>This project is licensed under the MIT License.</p>

<p>Enjoy the game! 🎮</p>
