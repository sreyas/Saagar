<?php $eff=theme_get_setting('show_effect_blog_link');?>
<div class="<?php print $eff?>">

<?php

$teacherview = views_get_view('blogger'); 
$display_id ='page_5';
$teacherview->set_display($display_id);
$teacherview->pre_execute();
$teacherview->execute(); 
$output =$teacherview->render();
print $output;

?>
</div>