# Created by: Alexander Zhuravlev <zaa@zaa.pp.ru>
# $FreeBSD: textproc/p5-Text-WikiFormat/Makefile 314055 2013-03-13 10:46:08Z bapt $

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

PERL_MODBUILD=	yes

MAN3=		Text::WikiFormat.3 \
		Text::WikiFormat::Blocks.3

.include <bsd.port.mk>
