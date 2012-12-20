# New ports collection makefile for:	p5-Template-Toolkit-Simple
# Date created:		2010-04-24
# Whom:			Li-Wen Hsu <lwhsu@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-Template-Toolkit-Simple/Makefile,v 1.7 2012/11/17 06:02:54 svnexp Exp $
#

PORTNAME=	Template-Toolkit-Simple
PORTVERSION=	0.16
CATEGORIES=	www textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	A Simple Interface to Template Toolkit

BUILD_DEPENDS=	p5-Template-Toolkit>=0:${PORTSDIR}/www/p5-Template-Toolkit
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Template::Toolkit::Simple.3

.include <bsd.port.mk>
