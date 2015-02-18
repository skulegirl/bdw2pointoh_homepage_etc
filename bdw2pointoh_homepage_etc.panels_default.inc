<?php
/**
 * @file
 * bdw2pointoh_homepage_etc.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function bdw2pointoh_homepage_etc_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'guarantee_proud_member_of';
  $mini->category = '';
  $mini->admin_title = 'Guarantee / Proud Member of';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '62bc73b0-a672-4f9e-848e-efaeb5b0bcdf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-eb2043a1-9e6b-42e1-8a70-a2ba381d4dec';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<img src="/sites/boondockerswelcome.com/files/media/HomePageImages/SatisfactionGuaranteed.png"><div class="SatisfactionGuaranteedContent"><h2 class="pane-title block-title">Satisfaction Guaranteed</h2>
Try Boondockers Welcome for 90 days. If you\'re not 100% satisfied, your membership fees will be refunded. No questions asked.</div>',
      'format' => '5',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'SatisfactionGuaranteed',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'eb2043a1-9e6b-42e1-8a70-a2ba381d4dec';
    $display->content['new-eb2043a1-9e6b-42e1-8a70-a2ba381d4dec'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-eb2043a1-9e6b-42e1-8a70-a2ba381d4dec';
    $pane = new stdClass();
    $pane->pid = 'new-a99f08bd-15d0-4b61-82b0-e9cb35b7d226';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'custom';
    $pane->subtype = 'proud_member_of';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => '1',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'proud-member-of',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a99f08bd-15d0-4b61-82b0-e9cb35b7d226';
    $display->content['new-a99f08bd-15d0-4b61-82b0-e9cb35b7d226'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-a99f08bd-15d0-4b61-82b0-e9cb35b7d226';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a99f08bd-15d0-4b61-82b0-e9cb35b7d226';
  $mini->display = $display;
  $export['guarantee_proud_member_of'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'how_it_works';
  $mini->category = '';
  $mini->admin_title = 'How It Works';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'four_4x25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'four_first' => NULL,
      'four_second' => NULL,
      'four_third' => NULL,
      'four_fourth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fdb1a20f-23c7-4645-a996-ebdfcba7bdea';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-97e20fc1-3820-4c7f-b9bd-cc6f1a02e8b6';
    $pane->panel = 'four_first';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'After joining',
      'title' => '',
      'body' => '<img src="/sites/boondockerswelcome.com/files/media/LandingPageImages/male66.png">
<br>
<div class="HowItWorksText">After joining, fill in a brief profile about yourself, including photos if you wish.</div>',
      'format' => '5',
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
    $pane->uuid = '97e20fc1-3820-4c7f-b9bd-cc6f1a02e8b6';
    $display->content['new-97e20fc1-3820-4c7f-b9bd-cc6f1a02e8b6'] = $pane;
    $display->panels['four_first'][0] = 'new-97e20fc1-3820-4c7f-b9bd-cc6f1a02e8b6';
    $pane = new stdClass();
    $pane->pid = 'new-8d77085a-8082-4c94-8a19-d2d3c09f0b66';
    $pane->panel = 'four_fourth';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Get Location from Host',
      'title' => '',
      'body' => '<img src="/sites/boondockerswelcome.com/files/media/LandingPageImages/map-7.png">
<br>
<div class="HowItWorksText">When a host receives a request, he can read the members profile and respond with exact directions if the location is available.</div>',
      'format' => '5',
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
    $pane->uuid = '8d77085a-8082-4c94-8a19-d2d3c09f0b66';
    $display->content['new-8d77085a-8082-4c94-8a19-d2d3c09f0b66'] = $pane;
    $display->panels['four_fourth'][0] = 'new-8d77085a-8082-4c94-8a19-d2d3c09f0b66';
    $pane = new stdClass();
    $pane->pid = 'new-f3fc10c2-3c58-4a77-bc4b-39b447aa1348';
    $pane->panel = 'four_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Add BDA Info',
      'title' => '',
      'body' => '<img src="/sites/boondockerswelcome.com/files/media/LandingPageImages/details.png">
<br>
<div class="HowItWorksText">If you sign up as a host, add details about your location, including size and availability restrictions. Its okay if you can even only host part of the year.</div>',
      'format' => '5',
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
    $pane->uuid = 'f3fc10c2-3c58-4a77-bc4b-39b447aa1348';
    $display->content['new-f3fc10c2-3c58-4a77-bc4b-39b447aa1348'] = $pane;
    $display->panels['four_second'][0] = 'new-f3fc10c2-3c58-4a77-bc4b-39b447aa1348';
    $pane = new stdClass();
    $pane->pid = 'new-c30cdb74-bf1b-4298-9cf0-d660d3f8b6ee';
    $pane->panel = 'four_third';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Send Messages',
      'title' => '',
      'body' => '<img src="/sites/boondockerswelcome.com/files/media/LandingPageImages/envelope32.png">
<br>
<div class="HowItWorksText">When you want to stay with a member, send them a message through our site, letting them know your dates and needs.</div>',
      'format' => '5',
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
    $pane->uuid = 'c30cdb74-bf1b-4298-9cf0-d660d3f8b6ee';
    $display->content['new-c30cdb74-bf1b-4298-9cf0-d660d3f8b6ee'] = $pane;
    $display->panels['four_third'][0] = 'new-c30cdb74-bf1b-4298-9cf0-d660d3f8b6ee';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-97e20fc1-3820-4c7f-b9bd-cc6f1a02e8b6';
  $mini->display = $display;
  $export['how_it_works'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'landing_page_benefit_panes';
  $mini->category = '';
  $mini->admin_title = 'landing page benefit panes';
  $mini->admin_description = 'Benefits of membership panes for landing page';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'three_3x33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_33_top' => NULL,
      'three_33_first' => NULL,
      'three_33_second' => NULL,
      'three_33_third' => NULL,
      'three_33_bottom' => NULL,
    ),
    'style' => 'default',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9ce32912-1a8e-458b-a9eb-6207fe7dabaa';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-64d9a0d4-7413-4bb1-a752-956111f82d04';
    $pane->panel = 'three_33_top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Hundreds of Listings',
      'body' => '<div class="BenefitImage">
<img src="/sites/boondockerswelcome.com/files/media/HomePageImages/currentMapMonitor.jpg" />
</div>
<div class="BenefitsText">
<p>Easily search all the listings of our overnight RV parking locations from the website.
<p>Find a spot on a host member\'s property that\'s on your way to your final destination.
</div>
<div class="CallToAction">
<a class="HomePageButton" href="/SearchListingsLinks">Search the Listings</a>
</div>',
      'format' => '2',
      'substitute' => TRUE,
      'name' => 'hundreds_of_listings',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'odd',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '64d9a0d4-7413-4bb1-a752-956111f82d04';
    $display->content['new-64d9a0d4-7413-4bb1-a752-956111f82d04'] = $pane;
    $display->panels['three_33_top'][0] = 'new-64d9a0d4-7413-4bb1-a752-956111f82d04';
    $pane = new stdClass();
    $pane->pid = 'new-e49809c4-39c6-414b-81ff-9177b44105bc';
    $pane->panel = 'three_33_top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Make New Friends',
      'body' => '<div class="BenefitImage">
<img src="/sites/boondockerswelcome.com/files/media/HomePageImages/UserPhotosScaled.jpg" />
</div>
<div class="BenefitsText">
<p>All our host locations are provided by RVers just like you.</p>
<p>Meet new people and make friends.</p>
</div>
<div class="CallToAction">
<a class="HomePageButton" href="/content/how-it-works">Learn How It Works</a>
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
      'css_class' => 'even',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e49809c4-39c6-414b-81ff-9177b44105bc';
    $display->content['new-e49809c4-39c6-414b-81ff-9177b44105bc'] = $pane;
    $display->panels['three_33_top'][1] = 'new-e49809c4-39c6-414b-81ff-9177b44105bc';
    $pane = new stdClass();
    $pane->pid = 'new-2252c3ee-8173-4cf7-b974-11cc6a6c0269';
    $pane->panel = 'three_33_top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'All RVers Welcome',
      'body' => '<div class="BenefitImage">
<img src="/sites/boondockerswelcome.com/files/media/HomePageImages/AllRVs.jpg" />
</div><div class="BenefitsText">
<p>We know not everyone is able to host other members, for a variety of reasons.
<p>We offer both host and guest-only memberships, so even those who can\'t reciprocate can take advantage of the club.
</div>
<div class="CallToAction">
<a class="HomePageButton" href="/membership-products">See Membership Options</a>
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
      'css_class' => 'odd',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2252c3ee-8173-4cf7-b974-11cc6a6c0269';
    $display->content['new-2252c3ee-8173-4cf7-b974-11cc6a6c0269'] = $pane;
    $display->panels['three_33_top'][2] = 'new-2252c3ee-8173-4cf7-b974-11cc6a6c0269';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['landing_page_benefit_panes'] = $mini;

  return $export;
}
