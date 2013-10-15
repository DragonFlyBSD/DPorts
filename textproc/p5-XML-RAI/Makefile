# Created by: arved
# $FreeBSD: textproc/p5-XML-RAI/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	XML-RAI
PORTVERSION=	1.30.31
PORTEPOCH=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C/\.([0-9]+)$/\1/}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	RSS Abstraction Interface

RUN_DEPENDS=	p5-XML-RSS-Parser>=0:${PORTSDIR}/textproc/p5-XML-RSS-Parser \
		p5-TimeDate>=0:${PORTSDIR}/devel/p5-TimeDate
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	XML::RAI.3 \
	XML::RAI::Channel.3 \
	XML::RAI::Image.3 \
	XML::RAI::Item.3 \
	XML::RAI::Object.3

NO_STAGE=	yes
.include <bsd.port.mk>
