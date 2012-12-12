# New ports collection makefile for:	p5-Config-YAML
# Date created:		2010-03-03
# Whom:			Steve Wills <steve@mouf.net>
#
# $FreeBSD: ports/devel/p5-Config-YAML/Makefile,v 1.5 2012/11/17 05:56:09 svnexp Exp $
#

PORTNAME=	Config-YAML
PORTVERSION=	1.42
CATEGORIES=	devel textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Simple configuration automation

BUILD_DEPENDS=	p5-YAML>=0:${PORTSDIR}/textproc/p5-YAML
RUN_DEPENDS=	p5-YAML>=0:${PORTSDIR}/textproc/p5-YAML

PERL_CONFIGURE=	yes

MAN3=	Config::YAML.3

.include <bsd.port.mk>
