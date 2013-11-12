# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>
# $FreeBSD: databases/p5-DBIx-Class-DigestColumns/Makefile 332592 2013-11-03 06:53:54Z vanilla $

PORTNAME=	DBIx-Class-DigestColumns
PORTVERSION=	0.06000
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Automatic digest columns

RUN_DEPENDS=	p5-DBIx-Class>=0.06002:${PORTSDIR}/databases/p5-DBIx-Class
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild extract

post-extract:
	@${PERL} -i.bak -ne 'print unless /^\s*build_requires/ .. /},$$/ or /^\s*recommends/ .. /},$$/ ' ${WRKSRC}/Build.PL

.include <bsd.port.mk>
