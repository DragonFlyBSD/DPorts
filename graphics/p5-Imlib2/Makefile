# Created by: Jeremy Norris <ishmael27@home.com>
# $FreeBSD: graphics/p5-Imlib2/Makefile 332801 2013-11-05 01:33:02Z vanilla $

PORTNAME=	Imlib2
PORTVERSION=	1.0.0
PORTREVISION=	9
CATEGORIES=	graphics perl5
MASTER_SITES=	http://www.muhri.net/
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-Perl-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl bindings for Imlib2

USE_EFL=	imlib2
USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e 's,/usr/X11R6,${LOCALBASE},g' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
