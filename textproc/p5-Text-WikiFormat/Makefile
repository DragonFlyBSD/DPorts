# Created by: Alexander Zhuravlev <zaa@zaa.pp.ru>
# $FreeBSD: textproc/p5-Text-WikiFormat/Makefile 334922 2013-11-26 08:13:10Z culot $

PORTNAME=	Text-WikiFormat
PORTVERSION=	0.81
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Module for translating Wiki formatted text into other formats

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-URI>=0.01:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
