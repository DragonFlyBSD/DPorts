# Created by: -
# $FreeBSD: textproc/p5-Lingua-Ispell/Makefile 341596 2014-01-28 15:30:02Z bapt $

PORTNAME=	Lingua-Ispell
PORTVERSION=	0.07
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Perl module that encapsulates access to the Ispell program

BUILD_DEPENDS=	${LOCALBASE}/bin/ispell:${PORTSDIR}/textproc/aspell-ispell
RUN_DEPENDS:=	${BUILD_DEPENDS}

REINPLACE_ARGS=	-i ''
USE_PERL5=	configure
USES=		perl5

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|' ${WRKSRC}/lib/Lingua/Ispell.pm

.include <bsd.port.mk>
