# Created by: Shin-ya MURAKAMI <murashin@gfd-dennou.org>
# $FreeBSD: japanese/rubygem-myrurema/Makefile 327737 2013-09-20 18:47:54Z bapt $

PORTNAME=	myrurema
PORTVERSION=	0.3.4
CATEGORIES=	japanese rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A tool which helps searching/browsing/writing the Japanese Ruby docs

RUN_DEPENDS=	rubygem-launchy>=2.0.5:${PORTSDIR}/devel/rubygem-launchy

USE_RUBY=	yes
USE_RAKE=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/rurema

NO_STAGE=	yes
.include <bsd.port.pre.mk>

PKGNAMEPREFIX:=	${PKGNAMEPREFIX}rubygem-

.include <bsd.port.post.mk>
