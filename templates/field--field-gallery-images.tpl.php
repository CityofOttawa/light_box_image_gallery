<?php
  global $language;
  $lang_code = $language->language;
?>
<?php foreach ($items as $delta => $item) : ?>
  <?php
    module_load_include('inc', 'pathauto', 'pathauto');
    if(isset($item['#item']['field_file_image_title_text']['und'][0]['value'])) {
      $divid = pathauto_cleanstring($item['#item']['field_file_image_title_text']['und'][0]['value']);
    }
  ?>
  <?php if(isset($item['#item']['uri'])): ?>
    <?php if(isset($divid)): ?>
    <button type="button" class="toggle-button" data-toggle="modal" data-target="#<?php print $divid; ?>">
    <?php else: ?>
    <button type="button" class="toggle-button" data-toggle="modal">
      <p class="image"><?php print theme('image', array('path' => $item['#item']['uri'])); ?></p>
    </button>
    <?php endif; ?>
  <?php endif; ?>
  <?php if(isset($divid)): ?>
  <div class="modal fade" id="<?php print $divid; ?>" tabindex="-1" role="dialog">
  <?php else: ?>
  <div class="modal fade" tabindex="-1" role="dialog">
  <?php endif; ?>
    <div class="modal-dialog" role="document">
      <div class="modal-content">
        <div class="modal-header">
          <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
          <?php if(isset($item['#item']['field_file_image_title_text']['und'][0]['value'])): ?>
            <h4 class="modal-title"><?php print $item['#item']['field_file_image_title_text']['und'][0]['value']; ?></h4>
          <?php endif; ?>
        </div>
        <div class="modal-body">
          <?php if(isset($item['#item']['uri'])): ?>
            <p class="image"><?php print theme('image', array('path' => $item['#item']['uri'])); ?></p>
          <?php endif; ?>
          <?php if(isset($item['#item']['field_ottawa_image_caption']['und'][0]['value'])): ?>
            <p><?php print $item['#item']['field_ottawa_image_caption']['und'][0]['value']; ?></p>
          <?php endif; ?>
        </div>
      </div>
    </div>
  </div>
<?php endforeach; ?>
