# Created by: Daniel Roethlisberger <daniel@roe.ch>
# $FreeBSD: devel/rubygem-grit/Makefile 327726 2013-09-20 17:17:44Z bapt $

PORTNAME=	grit
PORTVERSION=	2.5.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	An object-oriented ruby library to access git repositories

RUN_DEPENDS=	rubygem-diff-lcs>=1.1:${PORTSDIR}/textproc/rubygem-diff-lcs \
		rubygem-mime-types>=1.15:${PORTSDIR}/misc/rubygem-mime-types \
		rubygem-posix-spawn>=0.3.6:${PORTSDIR}/devel/rubygem-posix-spawn

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
