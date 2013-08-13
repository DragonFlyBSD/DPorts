# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: textproc/p5-XML-Literal/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	XML-Literal
PORTVERSION=	0.02
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Syntax support for XML literals

RUN_DEPENDS=	p5-Sub-Override>=0:${PORTSDIR}/devel/p5-Sub-Override
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		XML::Literal.3

.include <bsd.port.mk>
