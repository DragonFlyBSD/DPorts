# New ports collection makefile for:	p5-LWP-UserAgent-Determined
# Date created:				2008-03-16
# Whom:					Yen-Ming Lee <leeym@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-LWP-UserAgent-Determined/Makefile,v 1.7 2012/11/17 06:02:51 svnexp Exp $
#

PORTNAME=	LWP-UserAgent-Determined
PORTVERSION=	1.06
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JESSE
PKGNAMEPREFIX=	p5-

MAINTAINER=	leeym@FreeBSD.org
COMMENT=	A virtual browser that retries errors

RUN_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		LWP::UserAgent::Determined.3

.include <bsd.port.mk>
