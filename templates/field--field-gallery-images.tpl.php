<?php
  global $language;
  $lang_code = $language->language;
?>
<?php foreach ($items as $delta => $item) : ?>
  <!-- Button trigger modal -->
  <?php
    module_load_include('inc', 'pathauto', 'pathauto');
    $divid = pathauto_cleanstring($item['#item']['field_file_image_title_text']['und'][0]['value']);
  ?>
  <button type="button" class="toggle-button" data-toggle="modal" data-target="#<?php print $divid; ?>">
    <p class="image"><?php print theme('image', array('path' => $item['#item']['uri'])); ?></p>
  </button>
  <div class="modal fade" id="<?php print $divid; ?>" tabindex="-1" role="dialog">
    <div class="modal-dialog" role="document">
      <div class="modal-content">
        <div class="modal-header">
          <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
          <h4 class="modal-title"><?php print $item['#item']['field_file_image_title_text']['und'][0]['value']; ?></h4>
        </div>
        <div class="modal-body">
          <p class="image"><?php print theme('image', array('path' => $item['#item']['uri'])); ?></p>
          <p><?php print $item['#item']['field_ott_image_caption'][$lang_code][0]['value']; ?></p>
        </div>
      </div>
    </div>
  </div>
<?php endforeach; ?>
