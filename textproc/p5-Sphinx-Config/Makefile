# New ports collection makefile for:	p5-Sphinx-Config
# Date created:		2011-10-05
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: ports/textproc/p5-Sphinx-Config/Makefile,v 1.2 2012/11/17 06:02:08 svnexp Exp $
#

PORTNAME=	Sphinx-Config
PORTVERSION=	0.09
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Sphinx search engine configuration file read/modify/write

BUILD_DEPENDS=	p5-List-MoreUtils>=0:${PORTSDIR}/lang/p5-List-MoreUtils
RUN_DEPENDS=	p5-List-MoreUtils>=0:${PORTSDIR}/lang/p5-List-MoreUtils

PERL_CONFIGURE=	yes

MAN3=		Sphinx::Config.3

.include <bsd.port.mk>
