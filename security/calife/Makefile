# Created by: Thomas Quinot <thomas@cuivre.fr.eu.org>
# $FreeBSD: security/calife/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	calife
PORTVERSION=	2.8.6.5
CATEGORIES=	security
MASTER_SITES=	http://assets.keltia.net/calife/
DISTNAME=	calife-2.8.6-p5

MAINTAINER=	thomas@FreeBSD.org
COMMENT=	Lightweight alternative to sudo

USE_BZIP2=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	"--with-etcdir=${PREFIX}/etc"

CONFLICTS?=	calife-3.*

MAN1=		calife.1
MAN5=		calife.auth.5

NO_STAGE=	yes
.include <bsd.port.mk>
