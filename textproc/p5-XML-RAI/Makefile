# Created by: arved
# $FreeBSD: textproc/p5-XML-RAI/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	XML-RAI
PORTVERSION=	1.30.31
PORTEPOCH=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C/\.([0-9]+)$/\1/}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	RSS Abstraction Interface

BUILD_DEPENDS=	p5-XML-RSS-Parser>=0:${PORTSDIR}/textproc/p5-XML-RSS-Parser \
		p5-TimeDate>=0:${PORTSDIR}/devel/p5-TimeDate
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
