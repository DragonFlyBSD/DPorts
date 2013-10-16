# Created by: TAKAHASHI Kaoru <kaoru@kaisei.org>
# $FreeBSD: www/p5-LWP-UserAgent-WithCache/Makefile 327776 2013-09-20 23:36:50Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>
