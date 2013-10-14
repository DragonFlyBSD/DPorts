# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: textproc/p5-String-Truncate/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	String-Truncate
PORTVERSION=	1.100600
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	A module for when strings are too long to be displayed in...

RUN_DEPENDS=	p5-Sub-Exporter>=0.953:${PORTSDIR}/devel/p5-Sub-Exporter \
		p5-Sub-Install>=0.03:${PORTSDIR}/devel/p5-Sub-Install
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		String::Truncate.3

NO_STAGE=	yes
.include <bsd.port.mk>
