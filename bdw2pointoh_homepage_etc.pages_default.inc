<?php
/**
 * @file
 * bdw2pointoh_homepage_etc.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function bdw2pointoh_homepage_etc_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'landing_page_2';
  $page->task = 'page';
  $page->admin_title = 'BDW2PointOh Home Pages';
  $page->admin_description = 'Home page.';
  $page->path = 'home';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'Home',
    'name' => 'primary-links',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_landing_page_2_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'landing_page_2';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'AnonymousUser',
    'no_blocks' => 0,
    'css_id' => '',
    'css' => '<script type="text/javascript">var switchTo5x=true;</script><script type="text/javascript" src="http://w.sharethis.com/button/buttons.js"></script><script type="text/javascript">stLight.options({publisher:\'137ef464-530f-4839-bf1f-ebdd43f948e9\'});</script>',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
    'pipeline' => 'standard',
  );
  $display = new panels_display();
  $display->layout = 'two_brick';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'region 1',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_2_left',
          1 => 'region_2_right',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_3',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'region_3' => array(
        'type' => 'region',
        'title' => 'region 3-1',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'region_2_left' => array(
        'type' => 'region',
        'title' => 'region-2-1',
        'width' => '50.003165225638654',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'region_2_right' => array(
        'type' => 'region',
        'title' => 'region 2-3',
        'width' => '49.99683477433648',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_4',
          1 => 'region_4__2',
          2 => 'region_4_3',
          3 => 'region_4_4',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'region_4' => array(
        'type' => 'region',
        'title' => 'region 4-1',
        'width' => '25.091636136353202',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      'region_4__2' => array(
        'type' => 'region',
        'title' => 'region 4-2',
        'width' => '24.90740589209167',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      'region_4_3' => array(
        'type' => 'region',
        'title' => 'region 4-3',
        'width' => '25.011084284854917',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      'region_4_4' => array(
        'type' => 'region',
        'title' => 'region 4-4',
        'width' => '24.989873686700207',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_5_1',
          1 => 'region_5_2',
        ),
        'parent' => 'main',
        'class' => 'Region 5',
      ),
      'region_5_1' => array(
        'type' => 'region',
        'title' => 'region 5-1',
        'width' => 50,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      'region_5_2' => array(
        'type' => 'region',
        'title' => 'region 5-2',
        'width' => 50,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'center' => array(
      'style' => '-1',
    ),
    'style' => 'default',
    'style_settings' => array(
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'default' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'region_2' => NULL,
      'region_3' => NULL,
      'region_2_left' => NULL,
      'region_2_right' => NULL,
      'region_3_right' => NULL,
      'region_4' => NULL,
      'region_4__2' => NULL,
      'region_4_3' => NULL,
      'region_4_4' => NULL,
      'region_5_1' => NULL,
      'region_5_2' => NULL,
      'region_1_left' => NULL,
      'region_1_right' => NULL,
      'two_brick_top' => NULL,
      'two_brick_left_above' => NULL,
      'two_brick_right_above' => NULL,
      'two_brick_middle' => NULL,
      'two_brick_left_below' => NULL,
      'two_brick_right_below' => NULL,
      'two_brick_bottom' => NULL,
    ),
  );
  $display->cache = array(
    'method' => '0',
    'settings' => array(),
  );
  $display->title = '';
  $display->uuid = 'a7b2fdfc-2d4e-4b3a-b8a6-51fc537de592';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d97ffef1-1de1-4ce2-8088-63a56376d146';
    $pane->panel = 'two_brick_middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'As Seen In',
      'title' => '',
      'body' => '<div id="AsFeaturedInTitle">As Featured In</div>
<div id="AsFeaturedInContent">
<div class="AsFeaturedInLogo"><a href="http://www.airstreamlife.com/"><img src="/sites/boondockerswelcome.com/files/media/AsSeenInLogos/AirstreamLifeLogo.png"></a></div>
<div class="AsFeaturedInLogo"><a href="http://www.rvgazette.com/"><img src="/sites/boondockerswelcome.com/files/media/AsSeenInLogos/RVGazetteLogo.png"></a></div>
<div class="AsFeaturedInLogo"><a href="http://www.motorhomemagazine.com/rv-travel-news/boondocking-website-aims-to-connect-rvers/"><img src="/sites/boondockerswelcome.com/files/media/AsSeenInLogos/MotorhomeLogo.jpg"></a></div>
<div class="AsFeaturedInLogo"><a href="http://content.yudu.com/Library/A1xdqd/RVTimesMagazine148/resources/index.htm?referrerUrl=http%3A%2F%2Fwww.rvtimes.ca%2Fjuly-august-2012-rv-times-148-digital-edition%2F"><img src="/sites/boondockerswelcome.com/files/media/AsSeenInLogos/RVTimesLogo.jpg"></a></div>
<div class="AsFeaturedInLogo"><a href="http://www.fmcmagazine.com/fmc-magazine-ap/" target="_blank"><img src="/sites/boondockerswelcome.com/files/media/AsSeenInLogos/fmclogo_cyan.jpg" alt="Family Motor Coaching"></a></div>
</div>',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'as-seen-in',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd97ffef1-1de1-4ce2-8088-63a56376d146';
    $display->content['new-d97ffef1-1de1-4ce2-8088-63a56376d146'] = $pane;
    $display->panels['two_brick_middle'][0] = 'new-d97ffef1-1de1-4ce2-8088-63a56376d146';
    $pane = new stdClass();
    $pane->pid = 'new-d20be427-5462-41fc-ad7d-986ad97b1337';
    $pane->panel = 'two_brick_middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'landing_page_benefit_panes';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd20be427-5462-41fc-ad7d-986ad97b1337';
    $display->content['new-d20be427-5462-41fc-ad7d-986ad97b1337'] = $pane;
    $display->panels['two_brick_middle'][1] = 'new-d20be427-5462-41fc-ad7d-986ad97b1337';
    $pane = new stdClass();
    $pane->pid = 'new-23e7980e-5748-4b2c-ba7d-4090cb901d47';
    $pane->panel = 'two_brick_middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Customer Testimonials',
      'title' => '',
      'body' => '<div class="TestimonialContainer odd first">
<div class="TestimonialImage"><img src="/sites/boondockerswelcome.com/files/media/HomePageImages/testimonials/TerryAndMalcolmCircleScaled.gif"/></div>
<div class="TestimonialTitle">Incredible experience</div>
<div class="TestimonialText">I can\'t say enough about the kindness and helpfulness of our fellow members. Everyone was so considerate and helpful. I can\'t wait to welcome our first guests and start repaying the kindness that\'s been shown to us.</div>
<div class="TestimonialAuthor">Member "Terry and Malcolm"</div>
</div>

<div class="TestimonialContainer even">
<div class="TestimonialImage"><img src="/sites/boondockerswelcome.com/files/media/HomePageImages/testimonials/travellers2CircleScaled.gif"/></div>
<div class="TestimonialTitle">The best thing to happen since the invention of the wheel</div>
<div class="TestimonialText">We LOVE it. Great people, very friendly and helpful. It is great to be able to pull into a driveway and feel at home, you don\'t have to worry over getting that knock on the door in the middle of the night.</div>
<div class="TestimonialAuthor">Member "travellers2"</div>
</div>

<div class="TestimonialContainer odd">
<div class="TestimonialImage"><img src="/sites/boondockerswelcome.com/files/media/HomePageImages/testimonials/SiebrandsCircleScaled.gif"/></div>
<div class="TestimonialTitle">Boondocking all the way</div>
<div class="TestimonialText">We boondocked all the way from NE Canada to southern Mississippi using eight sites! The pressure was off, because we knew we had a warm resting place each night. We enjoyed meeting a diversity of hosts. And every host said, "What a great idea -- Boondockers Welcome!"</div>
<div class="TestimonialAuthor">Member "Siebrands"</div>
</div>

<div class="TestimonialContainer even last">
<div class="TestimonialImage"><img src="/sites/boondockerswelcome.com/files/media/HomePageImages/testimonials/Jstewart57CircleScaled.gif"/></div>
<div class="TestimonialTitle">Making a dream trip a reality</div>
<div class="TestimonialText">I recommend Boondockers Welcome to everyone I talk to who says "I\'ve always dreamed of doing a trip like you are doing!" Boondockers makes it easy and fun!</div>
<div class="TestimonialAuthor">Member "jstewart57"</div>
</div>',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'TestimonialsPane',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '23e7980e-5748-4b2c-ba7d-4090cb901d47';
    $display->content['new-23e7980e-5748-4b2c-ba7d-4090cb901d47'] = $pane;
    $display->panels['two_brick_middle'][2] = 'new-23e7980e-5748-4b2c-ba7d-4090cb901d47';
    $pane = new stdClass();
    $pane->pid = 'new-d2fb8334-be86-4e4c-858d-cea0ed8331d5';
    $pane->panel = 'two_brick_middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'guarantee_proud_member_of';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd2fb8334-be86-4e4c-858d-cea0ed8331d5';
    $display->content['new-d2fb8334-be86-4e4c-858d-cea0ed8331d5'] = $pane;
    $display->panels['two_brick_middle'][3] = 'new-d2fb8334-be86-4e4c-858d-cea0ed8331d5';
    $pane = new stdClass();
    $pane->pid = 'new-78521c85-b267-41e8-9bbc-1e566eeeee81';
    $pane->panel = 'two_brick_top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div id="MainHeadline">
<h1>Safe. Legal. Free.</h1>
<h2>Park overnight on fellow RVers\' property.</h2>
</div>',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '78521c85-b267-41e8-9bbc-1e566eeeee81';
    $display->content['new-78521c85-b267-41e8-9bbc-1e566eeeee81'] = $pane;
    $display->panels['two_brick_top'][0] = 'new-78521c85-b267-41e8-9bbc-1e566eeeee81';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_landing_page_2_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'landing_page_2';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Full Member Home Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'full-member-home-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 8,
              1 => 13,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'three_25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_25_50_25_top' => NULL,
      'three_25_50_25_first' => NULL,
      'three_25_50_25_second' => NULL,
      'three_25_50_25_third' => NULL,
      'three_25_50_25_bottom' => NULL,
      'two_brick_top' => NULL,
      'two_brick_left_above' => NULL,
      'two_brick_right_above' => NULL,
      'two_brick_middle' => NULL,
      'two_brick_left_below' => NULL,
      'two_brick_right_below' => NULL,
      'two_brick_bottom' => NULL,
      'three_50_25_25_top' => NULL,
      'three_50_25_25_first' => NULL,
      'three_50_25_25_second' => NULL,
      'three_50_25_25_third' => NULL,
      'three_50_25_25_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '51c55aa7-012b-4dab-870b-ce7e35a1cb3b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7f47b33f-c2b5-4056-acc0-39093a3f0761';
    $pane->panel = 'three_25_50_25_first';
    $pane->type = 'block';
    $pane->subtype = 'system-navigation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Getting Around',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7f47b33f-c2b5-4056-acc0-39093a3f0761';
    $display->content['new-7f47b33f-c2b5-4056-acc0-39093a3f0761'] = $pane;
    $display->panels['three_25_50_25_first'][0] = 'new-7f47b33f-c2b5-4056-acc0-39093a3f0761';
    $pane = new stdClass();
    $pane->pid = 'new-e0c201e3-8e73-4b3f-9a50-a64406f811a6';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'referral rewards',
      'title' => '',
      'body' => '<a href="/ReferralRewards"><img src="/sites/boondockerswelcome.com/files/media/iconsets/misc/ReferralRewards.png"></a>
Learn how to <a href="/ReferralRewards">refer other members</a> and receive rewards of free months of membership.',
      'format' => '5',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'referral-rewards',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e0c201e3-8e73-4b3f-9a50-a64406f811a6';
    $display->content['new-e0c201e3-8e73-4b3f-9a50-a64406f811a6'] = $pane;
    $display->panels['three_25_50_25_second'][0] = 'new-e0c201e3-8e73-4b3f-9a50-a64406f811a6';
    $pane = new stdClass();
    $pane->pid = 'new-03dd8ed6-1d2b-4ee7-abc8-2d0c22322dc2';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'member bonuses',
      'title' => '',
      'body' => '<a href="/MemberBonuses"><img src="/sites/boondockerswelcome.com/files/media/iconsets/misc/MemberBonuses.png"></a>
Visit our <a href="/MemberBonuses">member bonuses</a> page to get your free e-book, coupon codes for other membership sites, and more.',
      'format' => '5',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'member-bonuses',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '03dd8ed6-1d2b-4ee7-abc8-2d0c22322dc2';
    $display->content['new-03dd8ed6-1d2b-4ee7-abc8-2d0c22322dc2'] = $pane;
    $display->panels['three_25_50_25_second'][1] = 'new-03dd8ed6-1d2b-4ee7-abc8-2d0c22322dc2';
    $pane = new stdClass();
    $pane->pid = 'new-dd96be11-3b63-46f9-bcc9-2178b9fed7cd';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href="/recent-news"><img src="/sites/boondockerswelcome.com/files/media/iconsets/misc/announceIcon100w.png"></a>
Make sure to get all the most <a href="/recent-news">recent news and announcements</a> from Boondockers Welcome.',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'recent-news',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'dd96be11-3b63-46f9-bcc9-2178b9fed7cd';
    $display->content['new-dd96be11-3b63-46f9-bcc9-2178b9fed7cd'] = $pane;
    $display->panels['three_25_50_25_second'][2] = 'new-dd96be11-3b63-46f9-bcc9-2178b9fed7cd';
    $pane = new stdClass();
    $pane->pid = 'new-d59dbb1c-7bd6-4e61-92ac-dee9d7de8f35';
    $pane->panel = 'three_25_50_25_third';
    $pane->type = 'views';
    $pane->subtype = 'bda_loc_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'Our Newest Boondocking Locations',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd59dbb1c-7bd6-4e61-92ac-dee9d7de8f35';
    $display->content['new-d59dbb1c-7bd6-4e61-92ac-dee9d7de8f35'] = $pane;
    $display->panels['three_25_50_25_third'][0] = 'new-d59dbb1c-7bd6-4e61-92ac-dee9d7de8f35';
    $pane = new stdClass();
    $pane->pid = 'new-862e4ab7-e62e-4399-bb33-66325aad5e1e';
    $pane->panel = 'three_25_50_25_third';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Submit a testimonial!',
      'body' => '<img src="/sites/boondockerswelcome.com/files/media/iconsets/misc/TestimonialImageScaled.png">
Tell us what you love about the Boondockers Welcome site. <a href="/node/add/testimonial">Submit a testimonial</a>.',
      'format' => '5',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'submit-testimonial',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '862e4ab7-e62e-4399-bb33-66325aad5e1e';
    $display->content['new-862e4ab7-e62e-4399-bb33-66325aad5e1e'] = $pane;
    $display->panels['three_25_50_25_third'][1] = 'new-862e4ab7-e62e-4399-bb33-66325aad5e1e';
    $pane = new stdClass();
    $pane->pid = 'new-e4d1d00b-f407-4ea7-a668-0fc29c7cceb3';
    $pane->panel = 'three_25_50_25_top';
    $pane->type = 'views';
    $pane->subtype = 'news_and_reminders';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e4d1d00b-f407-4ea7-a668-0fc29c7cceb3';
    $display->content['new-e4d1d00b-f407-4ea7-a668-0fc29c7cceb3'] = $pane;
    $display->panels['three_25_50_25_top'][0] = 'new-e4d1d00b-f407-4ea7-a668-0fc29c7cceb3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['landing_page_2'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'membership_products';
  $page->task = 'page';
  $page->admin_title = 'Membership Options';
  $page->admin_description = 'Membership Options ';
  $page->path = 'membership-products';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_membership_products_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'membership_products';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'two_50';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_50_top' => NULL,
      'two_50_first' => NULL,
      'two_50_second' => NULL,
      'two_50_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Choose Your Membership Plan';
  $display->uuid = '271081e3-2002-4b51-92ab-23893fea786c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b4b43b64-69e2-446a-9ae1-6d4a6d1f903a';
    $pane->panel = 'two_50_bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'See what people are saying',
      'body' => '<div class="TestimonialContainer odd first">
<div class="TestimonialImage"><img src="/sites/boondockerswelcome.com/files/media/HomePageImages/testimonials/PollyCircleScaled.gif"/></div>
<div class="TestimonialTitle">Wonderful System</div>
<div class="TestimonialText">The hosts I contacted responded quickly to my emails and were all welcoming and kind. Everyone offered helpful advice and ideas about what to visit on my trip. And best of all they all shared wonderful stories about their lives and their travels. I certainly am recommending this site to all my traveling friends.</div>
<div class="TestimonialAuthor">Member "Polly"</div>
</div>

<div class="TestimonialContainer even">
<div class="TestimonialImage"><img src="/sites/boondockerswelcome.com/files/media/HomePageImages/testimonials/TravlngaryCircleScaled.gif"/></div>
<div class="TestimonialTitle">Thanks for creating such a wonderful thing</div>
<div class="TestimonialText">We just got back from a 3 1/2 week trip, and we used Boondockers Welcome all but two nights. We were able to plan ahead with confidence knowing when we got there the host family was expecting us. We are so glad we found Boondockers Welcome and we look forward to future opportunities to meet and interact with other members.</div>
<div class="TestimonialAuthor">Members Gary and Valinda ("travlngary")</div>
</div>',
      'format' => '5',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'MoreTestimonialsPane',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b4b43b64-69e2-446a-9ae1-6d4a6d1f903a';
    $display->content['new-b4b43b64-69e2-446a-9ae1-6d4a6d1f903a'] = $pane;
    $display->panels['two_50_bottom'][0] = 'new-b4b43b64-69e2-446a-9ae1-6d4a6d1f903a';
    $pane = new stdClass();
    $pane->pid = 'new-32a2d297-d913-4915-87cd-b4da7b0b8c30';
    $pane->panel = 'two_50_bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Need more information?',
      'body' => '<div class="MoreInfoOptions">
<div class="MoreInfoOption"><img src="/sites/boondockerswelcome.com/files/media/iconsets/misc/gears.png"><a href="/content/how-it-works">Learn How It Works</a></div>
<div class="MoreInfoOption"><img src="/sites/boondockerswelcome.com/files/media/iconsets/misc/benefitcheck.png"><a href="/content/features-and-benefits">See Features and Benefits</a></div>
<div class="MoreInfoOption"><img src="/sites/boondockerswelcome.com/files/media/iconsets/misc/questionmark.png"><a href="/faq-page">Read Frequently Asked Questions</a></div>

',
      'format' => '5',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'MoreInformationPane',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '32a2d297-d913-4915-87cd-b4da7b0b8c30';
    $display->content['new-32a2d297-d913-4915-87cd-b4da7b0b8c30'] = $pane;
    $display->panels['two_50_bottom'][1] = 'new-32a2d297-d913-4915-87cd-b4da7b0b8c30';
    $pane = new stdClass();
    $pane->pid = 'new-fda6bc63-925c-4121-bb28-0d864da7dc9d';
    $pane->panel = 'two_50_bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'pricing fine print',
      'title' => '',
      'body' => '<div class="fine-print">Please note: All prices are in US Dollars.</div>',
      'format' => '1',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'PricingFinePrint',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fda6bc63-925c-4121-bb28-0d864da7dc9d';
    $display->content['new-fda6bc63-925c-4121-bb28-0d864da7dc9d'] = $pane;
    $display->panels['two_50_bottom'][2] = 'new-fda6bc63-925c-4121-bb28-0d864da7dc9d';
    $pane = new stdClass();
    $pane->pid = 'new-aaf4b735-47c8-490f-86c7-0771a6bf2e91';
    $pane->panel = 'two_50_first';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'membership_option_host',
      'title' => 'Can you host other RVers with a location on your property?',
      'body' => '<?php 
  global $user;
  $path = "/membership-products/host-membership";
  if(in_array(\'full member\', $user->roles) || in_array(\'Member With BDA Req\', $user->roles)) { 
    $earlyrenewal = TRUE; 
    $path .= "-renewal";
  } 
  if ($user->uid==0) {
   $linktext = "Join Now";
  }
  else
  {
    $linktext = "Renew Now";
  }
?>
<div class="MembershipTypeImg"><img src="/sites/boondockerswelcome.com/files/media/ProductImages/hostmembership.png"></div>
<div class="MembershipType">Host Membership</div>
<?php if ($earlyrenewal): ?>
<div class="Product">$19.95/year</div>
<div class=\'EarlyRenewalBonus\'>+ 1 month free for early renewal</div>
 or
<div class="Product">$44.95/3 years</div>
<div class=\'EarlyRenewalBonus\'>+ 3 months free for early renewal</div>
<?php else: ?>
<div class="Product">$19.95/year</div>
 or
<div class="Product">$44.95/3 years</div>
<?php endif ?>
<div class="cta-button"><a href=\'<?php echo $path?>\'><?php echo $linktext ?></a></div>
',
      'format' => '3',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'membership-option-host',
      'css_class' => 'membership-option host-membership new-user-membership ',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aaf4b735-47c8-490f-86c7-0771a6bf2e91';
    $display->content['new-aaf4b735-47c8-490f-86c7-0771a6bf2e91'] = $pane;
    $display->panels['two_50_first'][0] = 'new-aaf4b735-47c8-490f-86c7-0771a6bf2e91';
    $pane = new stdClass();
    $pane->pid = 'new-b9820a17-f33c-4df3-bf1a-bfc28a0b5ca3';
    $pane->panel = 'two_50_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'membership_option_guest_only',
      'title' => 'No overnight RV parking available on your property?',
      'body' => '<?php 
  global $user;
  $path = "/membership-products/guest-only-membership";
  if(in_array(\'full member\', $user->roles) || in_array(\'Member With BDA Req\', $user->roles)) { 
    $earlyrenewal = TRUE; 
    $path .= "-renewal";
  } 
  if ($user->uid==0) {
   $linktext = "Join Now";
  }
  else
  {
    $linktext = "Renew Now";
  }
?>
<div class="MembershipTypeImg"><img src="/sites/boondockerswelcome.com/files/media/ProductImages/guestmembership.png"></div>
<div class="MembershipType">Guest-Only Membership</div>
<?php if ($earlyrenewal): ?>
<div class="Product">$24.95/year</div>
<div class=\'EarlyRenewalBonus\'>+ 1 month free for early renewal</div>
 or
<div class="Product">$59.95/3 years</div>
<div class=\'EarlyRenewalBonus\'>+ 3 months free for early renewal</div>
<?php else: ?>
<div class="Product">$24.95/year</div> 
or 
<div class="Product">$59.95/3 years</div>
<?php endif ?>

<div class="cta-button"><a href="<?php echo $path?>"><?php echo $linktext ?></a></div>',
      'format' => '3',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'membership-option-guest-only',
      'css_class' => 'membership-option guest-only-membership new-user-membership ',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b9820a17-f33c-4df3-bf1a-bfc28a0b5ca3';
    $display->content['new-b9820a17-f33c-4df3-bf1a-bfc28a0b5ca3'] = $pane;
    $display->panels['two_50_second'][0] = 'new-b9820a17-f33c-4df3-bf1a-bfc28a0b5ca3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-aaf4b735-47c8-490f-86c7-0771a6bf2e91';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['membership_products'] = $page;

  return $pages;

}
