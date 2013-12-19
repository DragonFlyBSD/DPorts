# Created by: Greg Larkin <glarkin@FreeBSD.org>
# $FreeBSD: net/rubygem-rightgogrid/Makefile 336656 2013-12-16 18:24:49Z glarkin $

PORTNAME=	rightgogrid
PORTVERSION=	0.1.0
CATEGORIES=	net rubygems
MASTER_SITES=	RG
DISTNAME=	right_gogrid-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Provides Ruby access to the GoGrid API

RUN_DEPENDS=	rubygem-righthttpconnection>=1.2.4:${PORTSDIR}/net/rubygem-righthttpconnection

USE_RUBY=	yes
USE_RUBYGEMS=	yes
GEM_NAME=	${DISTNAME}
RUBYGEM_AUTOPLIST=	yes
UNIQUENAME=	${PORTNAME}

NO_STAGE=	yes
.include <bsd.port.mk>
