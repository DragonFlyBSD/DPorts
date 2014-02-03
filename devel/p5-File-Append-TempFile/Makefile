# Created by: Peter Pentchev <roam@FreeBSD.org>
# $FreeBSD: devel/p5-File-Append-TempFile/Makefile 342249 2014-02-02 08:11:05Z eadler $

PORTNAME=	File-Append-TempFile
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Append data to files using a temporary copy

TEST_DEPENDS=	p5-Test-Pod-Coverage>=0:${PORTSDIR}/devel/p5-Test-Pod-Coverage

USES=		perl5
USE_PERL5=	configure

PORTDOCS=	Changes README

test:		build
		cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} test

post-install:
		${MKDIR} ${STAGEDIR}${DOCSDIR}
		${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
