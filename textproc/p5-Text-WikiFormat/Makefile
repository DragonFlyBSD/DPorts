# Created by: Alexander Zhuravlev <zaa@zaa.pp.ru>
# $FreeBSD: textproc/p5-Text-WikiFormat/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	Text-WikiFormat
PORTVERSION=	0.80
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Module for translating Wiki formatted text into other formats

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-URI>0:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

MAN3=		Text::WikiFormat.3 \
		Text::WikiFormat::Blocks.3

NO_STAGE=	yes
.include <bsd.port.mk>
