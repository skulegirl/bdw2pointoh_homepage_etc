<?php
/**
 * @file
 * bdw2pointoh_homepage_etc.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function bdw2pointoh_homepage_etc_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'hundreds_of_listings';
  $content->admin_title = 'hundreds of listings';
  $content->admin_description = 'Description of site with link to listings';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'Hundreds of Listings',
    'body' => '<div class="BenefitImage">
<img src="/sites/boondockerswelcome.com/files/media/HomePageImages/currentMapMonitor.jpg" />
</div>
<div class="BenefitsText">
<p>Easily search all the listings of our overnight RV parking locations from the website.
<p>Find a spot on a host member\'s property that\'s on the way to your final destination.
</div>
<div class="CallToAction">
<a class="HomePageButton" href="/SearchListingsLinks">Search the Listings</a>
</div>',
    'format' => '2',
    'substitute' => 1,
  );
  $export['hundreds_of_listings'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'proud_member_of';
  $content->admin_title = 'Proud Member Of:';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Proud Member Of:',
    'title' => 'Proud Member Of',
    'body' => '<div id="ProudMemberOfContent">
<div class="ProudMemberOfImg"><img src="/sites/boondockerswelcome.com/files/media/MemberOfLogos/EscapeeLogo.jpg"></div>
<div class="ProudMemberOfImg"><img src="/sites/boondockerswelcome.com/files/media/MemberOfLogos/fmca-logo-commercial_150x112.jpg"></div>
</div>',
    'format' => '5',
    'substitute' => TRUE,
  );
  $export['proud_member_of'] = $content;

  return $export;
}
