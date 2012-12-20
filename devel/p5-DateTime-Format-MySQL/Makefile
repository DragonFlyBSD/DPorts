# New ports collection makefile for:	p5-DateTime-Format-MySQL
# Date created:	   2 july 2003
# Whom:		   Mathieu Arnold <m@absolight.net>
#
# $FreeBSD: ports/devel/p5-DateTime-Format-MySQL/Makefile,v 1.11 2012/11/17 05:56:12 svnexp Exp $
#

PORTNAME=	DateTime-Format-MySQL
PORTVERSION=	0.04
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parse and format MySQL dates and times

BUILD_DEPENDS:=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime \
		p5-DateTime-Format-Builder>=0:${PORTSDIR}/devel/p5-DateTime-Format-Builder

PERL_MODBUILD=	yes

MAN3=		DateTime::Format::MySQL.3

.include <bsd.port.mk>
