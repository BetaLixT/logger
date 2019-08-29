<h1>BLT Logger</h1>
<h2>Description</h2>
<p>This C++ header provides logging functionality with log levels and leaves next to no code when not enabled</p>
<h2>Usage</h2>
<p>Include blt_logger.h where logger is necessary, to enable the logger BLT_DEBUG needs to be defined and the value of BLT_DEBUG determines the log level</p>

<h3>Logger Level: Errors</h3>
<p>To enable the logger with logger level at errors we must define BLT_DEBUG with value 0 ex:</p>
<pre><code>#define BLT_DEBUG 0</code></pre>
<p>Using the function blt_error() will print error messages, ex:</p>
<pre><code>blt_error("This is an error ", " errors are serious ", " Error Code: ", 1234);
blt_error("Something went terribly wrong :(");</code></pre>
<p>Output:</p>
<pre><code>[ERROR]This is an error  errors are serious  Error Code: 1234 [From] example.cpp:10
[ERROR]Something went terribly wrong :( [From] example.cpp:11</code></pre>

<h3>Logger Level: Warnings</h3>
<p>To enable the logger with logger level at warnings we must define BLT_DEBUG with value 1 ex:</p>
<pre><code>#define BLT_DEBUG 1</code></pre>

<p>Using the function blt_warn() will print warning messages, ex:</p>
<pre><code>blt_warn("This is a warning ", "warnings are not as serious ", "Warning Code: ", 12);
blt_warn("Something may be wrong :|");</code></pre>
<p>Output:</p>
<pre><code>[WARN]This is a warning warnings are not as serious Warning Code: 12 [From] example.cpp:13
[WARN]Something may be wrong :| [From] example.cpp:14</code></pre>

<h3>Logger Level: Verbose</h3>
<p>To enable the logger with logger level at verbose we must define BLT_DEBUG with value 2 ex:</p>
<pre><code>#define BLT_DEBUG 2</code></pre>
<p>Using the function blt_info() will print information messages, ex:</p>
<pre><code>blt_info("This is inforamtion ", "inforamation is just information... ", "heh ", "Information code?: ", 22);
blt_info("Nothing wrong here, just information :)");</code></pre>
<p>Output:</p>
<pre><code>[INFO]This is inforamtion inforamation is just information... heh Information code?: 22 [From] example.cpp:16
[INFO]Nothing wrong here, just information :) [From] example.cpp:17</code></pre>

<h2>Author</h2>
<p>Alphin Edgar D'cruz<br/>
aedc999@uowmail.edu.au<br/>
August 2019</p>
