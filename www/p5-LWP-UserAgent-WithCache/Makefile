# New ports collection makefile for:	p5-LWP-UserAgent-WithCache
# Date created:		2007-10-12
# Whom:			TAKAHASHI Kaoru <kaoru@kaisei.org>
#
# $FreeBSD: www/p5-LWP-UserAgent-WithCache/Makefile 326053 2013-09-02 18:23:34Z az $
#

PORTNAME=	LWP-UserAgent-WithCache
PORTVERSION=	0.12
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kaoru@kaisei.org
COMMENT=	LWP::UserAgent extension with local cache

BUILD_DEPENDS=	p5-Cache-Cache>=0:${PORTSDIR}/devel/p5-Cache-Cache \
		p5-File-HomeDir>=0:${PORTSDIR}/devel/p5-File-HomeDir \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		LWP::UserAgent::WithCache.3

.include <bsd.port.mk>
