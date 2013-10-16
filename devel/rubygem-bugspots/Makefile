# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: devel/rubygem-bugspots/Makefile 327726 2013-09-20 17:17:44Z bapt $

PORTNAME=	bugspots
PORTVERSION=	0.1.2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Bugspots - Bug Prediction Heuristic

RUN_DEPENDS=	rubygem-grit>=0:${PORTSDIR}/devel/rubygem-grit \
		rubygem-rainbow>=0:${PORTSDIR}/devel/rubygem-rainbow

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/bugspots bin/git-bugspots

NO_STAGE=	yes
.include <bsd.port.mk>
