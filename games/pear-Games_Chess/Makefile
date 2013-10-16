# Created by: Mark Huizer <xaa+ports@timewasters.nl>
# $FreeBSD: games/pear-Games_Chess/Makefile 327730 2013-09-20 17:36:33Z bapt $

PORTNAME=	Games_Chess
PORTVERSION=	1.0.1
CATEGORIES=	games devel pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR methods for constructing and validating chess games in PGN

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
