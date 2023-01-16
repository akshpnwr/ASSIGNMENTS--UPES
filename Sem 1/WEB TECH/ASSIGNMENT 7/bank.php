<?php 

    class Account {
        public $owner;
        public $balance;

        function __construct($owner, $balance) {
            $this->owner = $owner;
            $this->balance = $balance;
        }

        function deposit($balance) {
            $this->balance = $this->balance + $balance;
        }
        function withdraw($balance) {
            $this->balance = $this->balance - $balance;
        }
        
        function get_owner() {
            return $this->owner;
        }

        function get_balance() {
            return $this->balance;
        }
    }
    
    $akash = new Account('Akash',5000);

    $transaction = $_POST['select'];
    $value = $_POST['value'];

    echo '<h1>Initial balance of '.$akash->get_owner().' is '.$akash->get_balance();
    echo '<br>Initiating a '.$transaction.' of '.$value;

    if ($transaction == 'deposit') {
        $akash->deposit($value);
    }
    if ($transaction == 'withdraw') {
        if ($value > $akash->get_balance()) {
            echo '<br><b>Insufficient balance!😭</b>';
        }
        else $akash->withdraw($value);
    }

    echo '<br>Balance : '.$akash->get_balance();
?>