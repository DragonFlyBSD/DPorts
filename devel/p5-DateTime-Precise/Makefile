# New ports collection makefile for:	p5-DateTime-Precise
# Date created:	   26 june 2003
# Whom:		   Mathieu Arnold <m@absolight.net>
#
# $FreeBSD: ports/devel/p5-DateTime-Precise/Makefile,v 1.7 2012/11/17 05:56:13 svnexp Exp $
#

PORTNAME=	DateTime-Precise
PORTVERSION=	1.05
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perform common time and date operations with additional GPS operations

BUILD_DEPENDS=	p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		DateTime::Precise.3

.include <bsd.port.mk>
