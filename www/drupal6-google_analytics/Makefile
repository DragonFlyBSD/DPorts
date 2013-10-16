# Created by: Nick Hilliard <nick@foobar.org>
# $FreeBSD: www/drupal6-google_analytics/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	google_analytics
DISTVERSION=	6.x-3.5
CATEGORIES=	www

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Adds the Google Analytics web stats tracking system to your website

USE_DRUPAL=	yes
DRUPAL6_MODULE=	yes

MODULE_FILES=	googleanalytics.admin.inc googleanalytics.install googleanalytics.module \
		googleanalytics.info googleanalytics.js googleanalytics.test

DOC_FILES=	LICENSE.txt README.txt

NO_STAGE=	yes
.include <bsd.port.mk>
