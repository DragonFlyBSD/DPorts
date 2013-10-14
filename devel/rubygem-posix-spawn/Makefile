# Created by: Steve Wills <swills@rubick>
# $FreeBSD: devel/rubygem-posix-spawn/Makefile 327726 2013-09-20 17:17:44Z bapt $

PORTNAME=	posix-spawn
PORTVERSION=	0.3.6
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby wrapper for posix_spawnp(2) for faster process spawning

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/posix-spawn-benchmark

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.if ${OSVERSION} < 800000
IGNORE=		missing posix_spawnp
.endif

.include <bsd.port.post.mk>
