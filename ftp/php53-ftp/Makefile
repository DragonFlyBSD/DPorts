# $FreeBSD: ftp/php53-ftp/Makefile 327729 2013-09-20 17:23:18Z bapt $

CATEGORIES=	ftp

MASTERDIR=	${.CURDIR}/../../lang/php53

PKGNAMESUFFIX=	-ftp

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} s/HAVE_OPENSSL_EXT/__FreeBSD__/ \
		${WRKSRC}/ftp.* ${WRKSRC}/php_ftp.*

.include "${MASTERDIR}/Makefile"
