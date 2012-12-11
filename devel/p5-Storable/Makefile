# Created by: James FitzGibbon <jfitz@FreeBSD.org>
# $FreeBSD: ports/devel/p5-Storable/Makefile,v 1.53 2012/11/17 05:56:29 svnexp Exp $

PORTNAME=	Storable
PORTVERSION=	2.39
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Persistency for perl data structures

PERL_CONFIGURE=	yes

MAN3=		Storable.3

post-patch:
	@${PERL} -pi -e '$$_="" if /MAN3PODS|INSTALLDIRS/' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
