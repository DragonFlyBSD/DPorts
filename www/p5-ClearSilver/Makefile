# New ports collection makefile for:	p5-ClearSilver
# Date created:				June 25, 2006
# Whom:					Rink Springer <rink@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-ClearSilver/Makefile,v 1.8 2012/11/17 06:02:48 svnexp Exp $
#

PORTNAME=	ClearSilver
PORTVERSION=	0.10.5
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	http://www.clearsilver.net/downloads/
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME:tl}-${PORTVERSION}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl bindings for fast and powerful template system

BUILD_DEPENDS=	${LOCALBASE}/lib/libneo_cs.a:${PORTSDIR}/www/clearsilver

PERL_CONFIGURE=	yes
CONFIGURE_ARGS=	INC="-I${LOCALBASE}/include/ClearSilver"

MAN3=		ClearSilver.3
WRKSRC=		${WRKDIR}/${DISTNAME}/perl

.include <bsd.port.mk>
