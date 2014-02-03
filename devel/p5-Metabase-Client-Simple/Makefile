# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: devel/p5-Metabase-Client-Simple/Makefile 341711 2014-01-29 10:57:06Z az $

PORTNAME=	Metabase-Client-Simple
PORTVERSION=	0.009
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DAGOLDEN
PKGNAMEPREFIX=	p5-

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Client that submits to Metabase servers

BUILD_DEPENDS=	p5-JSON>=0:${PORTSDIR}/converters/p5-JSON \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-Metabase-Fact>0:${PORTSDIR}/devel/p5-Metabase-Fact
RUN_DEPENDS=	p5-JSON>=0:${PORTSDIR}/converters/p5-JSON \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-Metabase-Fact>0:${PORTSDIR}/devel/p5-Metabase-Fact \
		p5-Crypt-SSLeay>0:${PORTSDIR}/security/p5-Crypt-SSLeay

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
