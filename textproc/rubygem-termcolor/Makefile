# Created by: Dennis Herrmann <dhn@FreeBSD.org>
# $FreeBSD: textproc/rubygem-termcolor/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	termcolor
PORTVERSION=	1.2.2
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	dhn@FreeBSD.org
COMMENT=	A library for ANSII color formatting like HTML for output in terminal

RUN_DEPENDS=	rubygem-highline>=1.5.0:${PORTSDIR}/devel/rubygem-highline

USE_RUBY=	yes
USE_RUBYGEMS=	yes
USE_RAKE=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
