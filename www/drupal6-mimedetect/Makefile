# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: www/drupal6-mimedetect/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	mimedetect
DISTVERSION=	6.x-1.3
CATEGORIES=	www
MASTER_SITES=	http://ftp.drupal.org/files/projects/

MAINTAINER=	wenheping@gmail.com
COMMENT=	An API for Consistent Server Side Mime Detection

USE_DRUPAL=	yes
DRUPAL6_MODULE=	yes

MODULE_FILES=	magic magic.mgc magic.mime \
		mimedetect.info mimedetect.install mimedetect.module
DOC_FILES=	LICENSE.txt README.txt

NO_STAGE=	yes
.include <bsd.port.mk>
