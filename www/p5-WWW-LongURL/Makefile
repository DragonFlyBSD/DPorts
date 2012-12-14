# New ports collection makefile for:	p5-WWW-LongURL
# Date created:				2012-02-27
# Whom:					Yi-Hsuan Hsin <mhsin@mhsin.org>
#
# $FreeBSD: ports/www/p5-WWW-LongURL/Makefile,v 1.2 2012/11/17 06:02:55 svnexp Exp $
#

PORTNAME=	WWW-LongURL
PORTVERSION=	0.05
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	mhsin@mhsin.org
COMMENT=	Perl interface to the LongURL API

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-JSON-Any>0:${PORTSDIR}/converters/p5-JSON-Any \
		p5-URI>0:${PORTSDIR}/net/p5-URI \
		p5-Class-Accessor>0:${PORTSDIR}/devel/p5-Class-Accessor \
		p5-libwww>0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

TEST_DEPENDS=	p5-LWP-Online>0:${PORTSDIR}/www/p5-LWP-Online

PERL_CONFIGURE=	yes

MAN3=		WWW::LongURL.3

.include <bsd.port.mk>
