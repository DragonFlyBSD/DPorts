# $FreeBSD: net/libnids-libnet11/Makefile 327755 2013-09-20 22:10:23Z bapt $

PKGNAMESUFFIX=	-libnet11

COMMENT=	Network monitoring library with TCP/IP reassembly using libnet11

MASTERDIR=	${.CURDIR}/../libnids

DESCR=		${.CURDIR}/pkg-descr

WITH_LIBNET11=	yes

CONFLICTS?=	libnids-[0-9]*

DISTINFO_FILE=	${MASTERDIR}/distinfo

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
