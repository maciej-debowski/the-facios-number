<?php
    function f($x) {
        if($x > 0) return pow($x, f($x - 1));
        return $x;
    }

    echo f(4);