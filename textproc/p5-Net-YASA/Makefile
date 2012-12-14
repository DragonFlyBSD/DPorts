# New ports collection makefile for:	textproc/p5-Net-YASA
# Date created:				21 Aug 2007
# Whom:					Cheng-Lung Sung <clsung@FreeBSD.org>
#
# $FreeBSD: ports/textproc/p5-Net-YASA/Makefile,v 1.6 2012/11/17 06:02:06 svnexp Exp $
#

PORTNAME=	Net-YASA
PORTVERSION=	0.03
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to YASA (Yet Another Suffix Array)

RUN_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_MODBUILD=	yes

MAN3=		Net::YASA.3 Net::YASA::ConfigData.3

.include <bsd.port.mk>
