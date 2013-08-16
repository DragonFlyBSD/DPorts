# Created by: Philip M. Gollucci <pgollucci@p6m7g8.com>
# $FreeBSD: textproc/rubygem-nokogiri/Makefile 323857 2013-07-28 22:31:09Z swills $

PORTNAME=	nokogiri
PORTVERSION=	1.6.0
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	An HTML, XML, SAX, and Reader parser

GEM_ENV=	LC_CTYPE=UTF-8 NOKOGIRI_USE_SYSTEM_LIBRARIES=true

USE_GNOME=	libxml2 libxslt

USE_RUBY=	yes
USE_RUBY_FEATURES=	iconv
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/nokogiri

.include <bsd.port.mk>
